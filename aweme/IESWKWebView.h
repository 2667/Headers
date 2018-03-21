//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import "IESWebViewProtocol-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class IESJSBridge, NSString, NSURL;
@protocol IESWebViewCustomEventDelegate, WKNavigationDelegate;

@interface IESWKWebView : WKWebView <WKNavigationDelegate, IESWebViewProtocol>
{
    id <IESWebViewCustomEventDelegate> _customEventDelegate;
    id <WKNavigationDelegate> _customDelegate;
    IESJSBridge *_bridge;
}

+ (id)instanceWithFrame:(struct CGRect)arg1 bridgeClass:(Class)arg2;
+ (void)load;
@property(retain, nonatomic) IESJSBridge *bridge; // @synthesize bridge=_bridge;
@property(nonatomic) __weak id <WKNavigationDelegate> customDelegate; // @synthesize customDelegate=_customDelegate;
@property(nonatomic) __weak id <IESWebViewCustomEventDelegate> customEventDelegate; // @synthesize customEventDelegate=_customEventDelegate;
- (void).cxx_destruct;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 bridgeClass:(Class)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)ies_respondsToSelector:(SEL)arg1;
- (void)ies_setNavigationDelegate:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
