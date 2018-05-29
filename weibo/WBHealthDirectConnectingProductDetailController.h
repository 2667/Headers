//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

@class UIButton, UIView, WBHCProductInfo;

@interface WBHealthDirectConnectingProductDetailController : WBTableViewController
{
    _Bool _hideBindButton;
    WBHCProductInfo *_product;
    UIView *_buttonBackgroundView;
    UIButton *_bindButton;
    UIButton *_shopButton;
}

@property(retain, nonatomic) UIButton *shopButton; // @synthesize shopButton=_shopButton;
@property(retain, nonatomic) UIButton *bindButton; // @synthesize bindButton=_bindButton;
@property(retain, nonatomic) UIView *buttonBackgroundView; // @synthesize buttonBackgroundView=_buttonBackgroundView;
@property(retain, nonatomic) WBHCProductInfo *product; // @synthesize product=_product;
@property(nonatomic) _Bool hideBindButton; // @synthesize hideBindButton=_hideBindButton;
- (void).cxx_destruct;
- (void)shopButtonPressed:(id)arg1;
- (void)bind:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)uiCode;
- (id)initWithProduct:(id)arg1;

@end

