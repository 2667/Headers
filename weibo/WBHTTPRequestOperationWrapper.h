//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNHTTPRequestOperationWrapper.h"

@class NSDictionary;

@interface WBHTTPRequestOperationWrapper : SNHTTPRequestOperationWrapper
{
    unsigned long long resendCondition;
    _Bool _switchedToHTTP;
    NSDictionary *_resendProperties;
}

@property(nonatomic) _Bool switchedToHTTP; // @synthesize switchedToHTTP=_switchedToHTTP;
@property(retain, nonatomic) NSDictionary *resendProperties; // @synthesize resendProperties=_resendProperties;
- (void).cxx_destruct;
- (void)callbackFailureBlockWithError:(id)arg1;
- (_Bool)shouldRetryHTTP;
- (void)callbackSuccessBlockWithResponseObject:(id)arg1;
- (void)handleResponse:(id)arg1 orError:(id)arg2;
- (id)validateResponse:(id)arg1;
- (void)resendWithCaptchaInfo:(id)arg1;
- (void)clearResendConfiguration;
- (void)setResendWithMaxTimes:(unsigned long long)arg1 condition:(unsigned long long)arg2 andExtraPropertiesBuildBlock:(CDUnknownBlockType)arg3;
- (id)requestWithResendProperties:(id)arg1;
- (void)switchRequestToHTTP:(id)arg1;
- (_Bool)isHTTPS;
- (void)dealloc;

@end

