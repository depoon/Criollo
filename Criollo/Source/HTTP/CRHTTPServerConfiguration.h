//
//  CRHTTPServerConfiguration.h
//  Criollo
//
//  Created by Cătălin Stan on 10/30/15.
//  Copyright © 2015 Cătălin Stan. All rights reserved.
//

#import "CRServerConfiguration.h"

@interface CRHTTPServerConfiguration : CRServerConfiguration

@property (nonatomic, assign) NSUInteger CRHTTPConnectionReadHeaderLineTimeout;
@property (nonatomic, assign) NSUInteger CRHTTPConnectionReadHeaderTimeout;
@property (nonatomic, assign) NSUInteger CRHTTPConnectionReadBodyTimeout;
@property (nonatomic, assign) NSUInteger CRHTTPConnectionWriteHeaderTimeout;
@property (nonatomic, assign) NSUInteger CRHTTPConnectionWriteBodyTimeout;
@property (nonatomic, assign) NSUInteger CRHTTPConnectionWriteGeneralTimeout;

@property (nonatomic, assign) NSUInteger CRRequestMaxHeaderLineLength;
@property (nonatomic, assign) NSUInteger CRRequestMaxHeaderLength;

@property (nonatomic, assign) NSUInteger CRRequestBodyBufferSize;

@end