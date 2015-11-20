//
//  CRResponse_Internal.h
//  Criollo
//
//  Created by Cătălin Stan on 11/20/15.
//  Copyright © 2015 Cătălin Stan. All rights reserved.
//

#import "CRResponse.h"

@class CRConnection;

@interface CRResponse ()

@property (nonatomic, assign) NSUInteger proposedStatusCode;
@property (nonatomic, strong) NSString* proposedStatusDescription;

@property (nonatomic, assign) BOOL alreadySentHeaders;
@property (nonatomic, assign) BOOL alreadyBuiltHeaders;
@property (nonatomic, readonly) BOOL finished;

- (instancetype)initWithConnection:(CRConnection *)connection HTTPStatusCode:(NSUInteger)HTTPStatusCode;
- (instancetype)initWithConnection:(CRConnection *)connection HTTPStatusCode:(NSUInteger)HTTPStatusCode description:(NSString *)description;
- (instancetype)initWithConnection:(CRConnection *)connection HTTPStatusCode:(NSUInteger)HTTPStatusCode description:(NSString *)description version:(NSString *)version NS_DESIGNATED_INITIALIZER;

- (void)writeData:(NSData*)data finish:(BOOL)flag;

- (void)buildStatusLine;
- (void)buildHeaders;

@end