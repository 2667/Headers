//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, WBFAsset;

@protocol WBFAssetInternalDelegate <NSObject>
- (void)asset:(WBFAsset *)arg1 didUpdateCacheActiveState:(_Bool)arg2;
- (void)asset:(WBFAsset *)arg1 didUpdateVideoSize:(struct CGSize)arg2;
- (void)assetDidCompleteSeeking:(WBFAsset *)arg1;
- (void)assetDidUpdatePlaybackState:(WBFAsset *)arg1;
- (void)asset:(WBFAsset *)arg1 didUpdateBufferedTime:(float)arg2;
- (void)assetDidRenderFirstVideoFrame:(WBFAsset *)arg1;
- (void)assetLikelyToKeepUp:(WBFAsset *)arg1;
- (void)assetDidStall:(WBFAsset *)arg1;
- (void)assetDidPlayToEnd:(WBFAsset *)arg1;
- (void)asset:(WBFAsset *)arg1 didGetNonFatalError:(NSError *)arg2;
- (void)asset:(WBFAsset *)arg1 didGetFatalError:(NSError *)arg2;
- (void)assetReadyToPlay:(WBFAsset *)arg1;

@optional
- (void)asset:(WBFAsset *)arg1 didReportFirstFrameStep:(NSString *)arg2 failed:(_Bool)arg3;
- (void)asset:(WBFAsset *)arg1 didUpdateCacheType:(long long)arg2 cacheSize:(unsigned long long)arg3;
@end

