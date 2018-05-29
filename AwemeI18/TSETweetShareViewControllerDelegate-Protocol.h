//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSETweet, TSETweetShareViewController;
@protocol TSEAccount;

@protocol TSETweetShareViewControllerDelegate <NSObject>
- (void)shareViewControllerPresentedWithNoAccounts:(TSETweetShareViewController *)arg1;
- (void)shareViewControllerWantsToCancelComposer:(TSETweetShareViewController *)arg1 partiallyComposedTweet:(TSETweet *)arg2;
- (void)shareViewControllerDidFinishSendingTweet:(TSETweetShareViewController *)arg1;

@optional
- (void)shareViewController:(TSETweetShareViewController *)arg1 didSelectAccount:(id <TSEAccount>)arg2;
@end

