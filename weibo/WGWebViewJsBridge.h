//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WKNavigationDelegate-Protocol.h"

@class NSBundle, NSString, WKWebView;

@interface WGWebViewJsBridge : NSObject <WKNavigationDelegate>
{
    WKWebView *_webView;
    id _webViewDelegate;
    NSBundle *_resourceBundle;
}

+ (id)wg_bridgeForWebView:(id)arg1 webViewDelegate:(id)arg2 resourceBundle:(id)arg3;
+ (id)wg_bridgeForWebView:(id)arg1 webViewDelegate:(id)arg2;
@property(nonatomic) __weak NSBundle *resourceBundle; // @synthesize resourceBundle=_resourceBundle;
@property(nonatomic) __weak id webViewDelegate; // @synthesize webViewDelegate=_webViewDelegate;
@property(nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)wg_excuteJSWithObj:(id)arg1 function:(id)arg2;
- (void)wgWebViewFrameDidChange:(id)arg1;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)insertJSbridge:(id)arg1 filename:(id)arg2;
- (void)dealloc;
- (void)_platformSpecificSetup:(id)arg1 webViewDelegate:(id)arg2 resourceBundle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

