//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BEEAsset, NSArray, NSIndexSet, NSString;

@protocol BEEAssetManagerProtocol <NSObject>

@optional
- (void)cancelGetCachingAssetImage:(int)arg1;
- (int)getCachingImageForAsset:(BEEAsset *)arg1 completion:(void (^)(UIImage *, _Bool, _Bool))arg2;
- (void)stopCachingImagesForAllAssets;
- (void)cancelCachingImages:(NSArray *)arg1;
- (void)startCachingImages:(NSArray *)arg1;
- (void)loadAllAssetKeysAndAssetsInCollection:(NSString *)arg1 indexSet:(NSIndexSet *)arg2 completion:(void (^)(unsigned long long))arg3;
- (void)loadAssetsInCollection:(NSString *)arg1 atIndexSet:(NSIndexSet *)arg2 completion:(void (^)(unsigned long long))arg3;
- (void)loadAssetsInCollection:(NSString *)arg1 completion:(void (^)(unsigned long long))arg2;
- (void)loadCollectionsWithCompletion:(void (^)(_Bool))arg1;
- (unsigned long long)assetAuthStatus;
@end
