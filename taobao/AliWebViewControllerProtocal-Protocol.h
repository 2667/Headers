//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AliUnionViewController, NSDictionary, NSURL, UIScrollView, UIViewController;

@protocol AliWebViewControllerProtocal <NSObject>
- (void)webViewRefresh;
- (UIScrollView *)contentScrollView;
- (UIViewController *)createWebViewController:(NSURL *)arg1 query:(NSDictionary *)arg2 errorTipsRect:(struct CGRect)arg3 unionViewController:(AliUnionViewController *)arg4;
@end
