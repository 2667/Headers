//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NSURLConnectionDataDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, NSURLRequest;
@protocol UIH5ViewControllerDelegate;

@interface UIH5ViewController : UIViewController <NSURLConnectionDataDelegate, UIWebViewDelegate>
{
    long long _orientation;
    _Bool _is404;
    double _statusBarHeight;
    NSMutableDictionary *_triedRequests;
    _Bool _useScreenSizeRatio;
    id <UIH5ViewControllerDelegate> _delegate;
    NSString *_page;
    NSURLRequest *_urlReq;
    NSString *rawUserAgent;
}

+ (struct CGSize)getFixedOrientationScreenMetrics:(long long)arg1;
+ (id)h5ViewControllerWithOrientation:(long long)arg1;
@property(retain, nonatomic) NSString *rawUserAgent; // @synthesize rawUserAgent;
@property(nonatomic) _Bool useScreenSizeRatio; // @synthesize useScreenSizeRatio=_useScreenSizeRatio;
@property(retain, nonatomic) NSURLRequest *urlReq; // @synthesize urlReq=_urlReq;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(nonatomic) id <UIH5ViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)load404:(id)arg1 errorCode:(long long)arg2;
- (void)on_result_cancel:(id)arg1;
- (void)on_result_repay:(id)arg1;
- (void)on_result_error:(id)arg1;
- (void)on_channel_cancel:(id)arg1;
- (void)on_404_returntogame:(id)arg1;
- (void)on_404_refresh:(id)arg1;
- (void)on_list_error:(id)arg1;
- (void)on_list_close:(id)arg1;
- (void)on_list_pay:(id)arg1;
- (id)combineMethodNamePage:(id)arg1 action:(id)arg2;
- (void)perform_string:(id)arg1 with:(id)arg2;
- (id)parseParam:(id)arg1;
- (struct CGSize)getPadding;
- (void)tryToLoadRequest:(id)arg1;
- (void)loadScheme:(id)arg1 host:(id)arg2 path:(id)arg3;
- (id)initWithOrientation:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
