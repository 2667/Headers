//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol TTVSegmentedPageViewDelegate <NSObject>

@optional
- (void)viewControllerFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)viewControllerDidBecomeVisible:(UIViewController *)arg1 firstAppear:(_Bool)arg2 isSwiping:(_Bool)arg3;
- (void)viewControllerDidBecomeInvisible:(UIViewController *)arg1 isSwiping:(_Bool)arg2;
@end

