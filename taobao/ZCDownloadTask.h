//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZCOperation.h"

@class NSData, NSDictionary, NSString, NSURLRequest, NSURLResponse;

@interface ZCDownloadTask : ZCOperation
{
    _Bool _checkResponse;
    _Bool _shouldResume;
    _Bool _dataFromFile;
    NSURLRequest *_request;
    NSString *_destinationPath;
    NSDictionary *_userInfo;
    NSURLResponse *_response;
    NSData *_responseData;
    NSString *_responseString;
    id _responseJson;
    NSString *_tempPath;
}

+ (id)taskWithRequest:(id)arg1 withPriority:(long long)arg2;
+ (id)taskWithURL:(id)arg1 withPriority:(long long)arg2;
+ (id)taskWithString:(id)arg1 withPriority:(long long)arg2;
@property(copy, nonatomic) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(retain, nonatomic) id responseJson; // @synthesize responseJson=_responseJson;
@property(copy, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(nonatomic) _Bool dataFromFile; // @synthesize dataFromFile=_dataFromFile;
@property(copy, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(readonly, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(nonatomic) _Bool shouldResume; // @synthesize shouldResume=_shouldResume;
@property(readonly, copy, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic, getter=isCheckResponse) _Bool checkResponse; // @synthesize checkResponse=_checkResponse;
- (void).cxx_destruct;
- (_Bool)deleteTempFileWithError:(id *)arg1;
- (_Bool)isAsynchronous;
- (id)fixErrorDescription:(id)arg1;
- (void)finishedWithError:(id)arg1;
- (void)cancelOperation;
- (void)reportProgress:(long long)arg1 withExpected:(long long)arg2;
- (unsigned long long)responseStringEncoding;
- (void)setResponseDataWithDestination;
- (void)setResponseDataWithData:(id)arg1;
@property(readonly, nonatomic) long long statusCode;
- (void)setResponse:(id)arg1;
- (void)setRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end

