//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBView.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIWebView;

@interface FBIFrame : FBView <UIWebViewDelegate>
{
    UIWebView *_webview;
    NSString *_nativescheme;
}

- (void).cxx_destruct;
- (void)updateEvent:(id)arg1 withValue:(id)arg2;
- (void)updateFunc:(id)arg1 withValue:(id)arg2;
- (void)updateAttr:(id)arg1 withValue:(id)arg2;
- (void)updateCSS:(id)arg1 withValue:(id)arg2;
- (void)updateRect;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)initWithNode:(struct fb_node *)arg1 withDocument:(id)arg2 withView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

