//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSModel.h"

@class AFHTTPRequestOperation, NSArray, NSMutableDictionary, NSString, QCFHostResolver;

@interface KSBaseModel : KSModel
{
    _Bool _isHttps;
    _Bool _isLoadingModel;
    _Bool _isAddToHead;
    AFHTTPRequestOperation *_operation;
    NSMutableDictionary *_params;
    NSString *_msg;
    NSArray *_dataParams;
    NSString *_path;
    unsigned long long _cachePolicy;
    NSString *_pcursor;
    QCFHostResolver *_resolver;
}

@property(retain, nonatomic) QCFHostResolver *resolver; // @synthesize resolver=_resolver;
@property(nonatomic) _Bool isAddToHead; // @synthesize isAddToHead=_isAddToHead;
@property(retain, nonatomic) NSString *pcursor; // @synthesize pcursor=_pcursor;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(nonatomic) _Bool isLoadingModel; // @synthesize isLoadingModel=_isLoadingModel;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSArray *dataParams; // @synthesize dataParams=_dataParams;
@property(nonatomic) _Bool isHttps; // @synthesize isHttps=_isHttps;
@property(readonly, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) AFHTTPRequestOperation *operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (void)addResultToOutputWhenLoadingMore:(id)arg1 responseObject:(id)arg2;
- (void)successProcess:(id)arg1 wself:(id)arg2 errorBlock:(CDUnknownBlockType)arg3 successBlock:(CDUnknownBlockType)arg4 more:(_Bool)arg5;
- (void)failureProcess:(id)arg1 errorBlock:(CDUnknownBlockType)arg2 wself:(id)arg3;
- (id)processAddtion:(id)arg1 wself:(id)arg2;
- (_Bool)shouldTrustProtectionSpace:(id)arg1;
- (id)requestWithIp:(id)arg1 requestURL:(id)arg2 timeoutInterval:(double)arg3 filePath:(id)arg4 downloadProgressBlock:(CDUnknownBlockType)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)addtionResponseProcess:(id)arg1 wself:(id)arg2;
- (void)cancel;
- (_Bool)isLoading;
- (_Bool)isOutdated;
- (void)load:(_Bool)arg1;
- (void)downloadFileWithPath:(id)arg1 filePath:(id)arg2 timeoutInterval:(double)arg3 customDNS:(_Bool)arg4 onFinishLoopUpDomain:(CDUnknownBlockType)arg5 onSuccess:(CDUnknownBlockType)arg6 onError:(CDUnknownBlockType)arg7 downloadProgressBlock:(CDUnknownBlockType)arg8;
- (void)upLoad:(_Bool)arg1 networkType:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4 uploadProcessBlock:(CDUnknownBlockType)arg5;
- (void)load:(_Bool)arg1 onSuccess:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (void)loadHttps:(_Bool)arg1 onSuccess:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)uploadClientForNetworkType:(id)arg1;
- (id)loadClientForNetworkType:(id)arg1;
- (id)init;
- (void)dealloc;

@end
