//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ExploreDetailManager, NSString, UIImage;

@protocol ExploreDetailManagerDelegate <NSObject>

@optional
- (void)detailManager:(ExploreDetailManager *)arg1 showTipMsg:(NSString *)arg2 icon:(UIImage *)arg3 dismissHandler:(void (^)(_Bool))arg4;
- (void)detailManager:(ExploreDetailManager *)arg1 showTipMsg:(NSString *)arg2 icon:(UIImage *)arg3;
- (void)detailManager:(ExploreDetailManager *)arg1 showTipMsg:(NSString *)arg2;
@end

