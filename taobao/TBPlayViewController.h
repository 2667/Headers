//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WVWebViewDelegate-Protocol.h"

@class MBProgressHUD, NSDictionary, NSString, WVWebView;

@interface TBPlayViewController : UIViewController <WVWebViewDelegate>
{
    NSString *_url;
    NSDictionary *_query;
    NSString *_gameId;
    WVWebView *_webView;
    NSString *_webViewUrl;
    MBProgressHUD *_hub;
}

@property(retain, nonatomic) MBProgressHUD *hub; // @synthesize hub=_hub;
@property(retain, nonatomic) NSString *webViewUrl; // @synthesize webViewUrl=_webViewUrl;
@property(retain, nonatomic) WVWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSString *gameId; // @synthesize gameId=_gameId;
@property(retain, nonatomic) NSDictionary *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)onWillEnterForegroundNotify:(id)arg1;
- (void)onDidEnterBackgroundNotify:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)loadRequest:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
