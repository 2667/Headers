//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIButton, WBSendStoryJob, WBStoryPublishViewController;

@protocol WBStoryPublishViewControllerDelegate <NSObject>
- (void)storyPublishViewController:(WBStoryPublishViewController *)arg1 didPressCloseButton:(UIButton *)arg2;
- (void)storyPublishViewController:(WBStoryPublishViewController *)arg1 didFinishWithJob:(WBSendStoryJob *)arg2;
- (void)storyPublishViewControllerLoadingAssetFailed:(WBStoryPublishViewController *)arg1;
@end

