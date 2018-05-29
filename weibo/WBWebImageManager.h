//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBImageCache-Protocol.h"
#import "WBImageLoadOperationDelegate-Protocol.h"

@class NSMutableDictionary, NSOperationQueue, NSString, WBImageCache;
@protocol OS_dispatch_queue;

@interface WBWebImageManager : NSObject <WBImageCache, WBImageLoadOperationDelegate>
{
    NSMutableDictionary *_requests;
    NSOperationQueue *_loadQueue;
    NSOperationQueue *_highPriorityQueue;
    WBImageCache *_cache;
    NSObject<OS_dispatch_queue> *_imageLoadQueue;
    NSOperationQueue *_prepareQueue;
}

+ (id)sharedManager;
@property(readonly, nonatomic) NSOperationQueue *prepareQueue; // @synthesize prepareQueue=_prepareQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageLoadQueue; // @synthesize imageLoadQueue=_imageLoadQueue;
- (void).cxx_destruct;
- (void)addAsyncTaskBlock:(CDUnknownBlockType)arg1;
- (id)loadImage:(id)arg1 complete:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3 isPermenant:(_Bool)arg4;
- (id)loadImage:(id)arg1 delegate:(id)arg2 alternativeUrls:(id)arg3 complete:(CDUnknownBlockType)arg4 progress:(CDUnknownBlockType)arg5 autoCancel:(_Bool)arg6 options:(long long)arg7 isPermenant:(_Bool)arg8 cacheType:(long long)arg9;
- (id)loadImage:(id)arg1 delegate:(id)arg2 alternativeUrls:(id)arg3 complete:(CDUnknownBlockType)arg4 progress:(CDUnknownBlockType)arg5 autoCancel:(_Bool)arg6 options:(long long)arg7 isPermenant:(_Bool)arg8;
- (id)loadImage:(id)arg1 delegate:(id)arg2 alternativeUrls:(id)arg3 complete:(CDUnknownBlockType)arg4 progress:(CDUnknownBlockType)arg5 autoCancel:(_Bool)arg6 options:(long long)arg7 cacheType:(long long)arg8;
- (id)loadImage:(id)arg1 delegate:(id)arg2 alternativeUrls:(id)arg3 complete:(CDUnknownBlockType)arg4 progress:(CDUnknownBlockType)arg5 autoCancel:(_Bool)arg6 options:(long long)arg7;
- (id)loadImage:(id)arg1 delegate:(id)arg2 alternativeUrls:(id)arg3 complete:(CDUnknownBlockType)arg4 progress:(CDUnknownBlockType)arg5 autoCancel:(_Bool)arg6 cacheType:(long long)arg7;
- (id)loadImage:(id)arg1 delegate:(id)arg2 alternativeUrls:(id)arg3 complete:(CDUnknownBlockType)arg4 progress:(CDUnknownBlockType)arg5 autoCancel:(_Bool)arg6;
- (id)loadImage:(id)arg1 delegate:(id)arg2 complete:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4 autoCancel:(_Bool)arg5 cacheType:(long long)arg6;
- (id)loadImage:(id)arg1 delegate:(id)arg2 complete:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4 autoCancel:(_Bool)arg5;
- (id)loadImage:(id)arg1 delegate:(id)arg2 complete:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4 cacheType:(long long)arg5;
- (id)loadImage:(id)arg1 delegate:(id)arg2 complete:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4;
- (id)loadImage:(id)arg1 complete:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3;
- (id)loadImage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)imageLoadOperation:(id)arg1 didReceivedSize:(unsigned long long)arg2 expectedSize:(unsigned long long)arg3 progressImage:(id)arg4;
- (_Bool)imageLoadOperationShouldHandleProgressImage:(id)arg1;
- (void)imageLoadCompleted:(id)arg1 image:(id)arg2 data:(id)arg3 error:(id)arg4 isCache:(_Bool)arg5;
- (id)permenantPathOfFileForOperation:(id)arg1;
- (id)pathOfFileForOperation:(id)arg1;
- (id)pathOfTemFileForOperation:(id)arg1;
- (id)operationForURL:(id)arg1;
- (void)cancelRequestForDelegate:(id)arg1;
- (void)cancelRequestForUrl:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)resumeImageLoad;
- (_Bool)imageLoadSuspended;
- (void)suspendImageLoad;
- (void)addRequest:(id)arg1;
- (id)cache;
- (void)dealloc;
- (id)init;
- (id)generateRedirectUrlRequestWithOriginUrlRequest:(id)arg1;
- (_Bool)setHttpHeaderWithRedirectUrlRequest:(id)arg1;
- (id)redirectUrlRequestToSIMFreeTrafficServerIfNeeded:(id)arg1;
- (id)_simFreeTrafficServerForURL:(id)arg1 proxyMode:(long long *)arg2 https:(_Bool *)arg3;
- (id)redirectUrlRequestToFreeTrafficServerIfNeeded:(id)arg1;
- (void)replaceOperationCurrentRequestBeforeStart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

