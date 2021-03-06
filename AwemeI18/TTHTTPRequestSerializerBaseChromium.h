//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTHTTPRequestSerializerProtocol-Protocol.h"

@class NSSet, NSString;

@interface TTHTTPRequestSerializerBaseChromium : NSObject <TTHTTPRequestSerializerProtocol>
{
    NSString *_defaultUserAgentString;
    NSSet *_HTTPMethodsEncodingParametersInURI;
}

+ (id)serializer;
@property(retain, nonatomic) NSSet *HTTPMethodsEncodingParametersInURI; // @synthesize HTTPMethodsEncodingParametersInURI=_HTTPMethodsEncodingParametersInURI;
@property(copy, nonatomic) NSString *defaultUserAgentString; // @synthesize defaultUserAgentString=_defaultUserAgentString;
- (void).cxx_destruct;
- (id)userAgentString;
- (void)_buildRequestHeaders:(id)arg1;
- (id)URLRequestWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 constructingBodyBlock:(CDUnknownBlockType)arg4 commonParams:(id)arg5;
- (id)URLRequestWithURL:(id)arg1 headerField:(id)arg2 params:(id)arg3 method:(id)arg4 constructingBodyBlock:(CDUnknownBlockType)arg5 commonParams:(id)arg6;
- (id)URLRequestWithRequestModel:(id)arg1 commonParams:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

