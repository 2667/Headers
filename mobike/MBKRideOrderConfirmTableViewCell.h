//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MBKViewProtocol-Protocol.h"

@class MBKBaseViewController, MBKRideOrderConfirmModel, NSString, TTTAttributedLabel, UIButton;

@interface MBKRideOrderConfirmTableViewCell : UITableViewCell <MBKViewProtocol>
{
    MBKRideOrderConfirmModel *_model;
    id _delegate;
    UIButton *_confirmButton;
    TTTAttributedLabel *_tipsAttributeLabel;
}

+ (double)viewWidth:(id)arg1;
+ (double)viewHeight:(id)arg1;
+ (id)reuseIdentifier;
@property(retain, nonatomic) TTTAttributedLabel *tipsAttributeLabel; // @synthesize tipsAttributeLabel=_tipsAttributeLabel;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MBKRideOrderConfirmModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)mbkProxyMethod;
- (void)shouqiProxyMethod;
- (void)tripCreationMethod;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configSubView;
- (void)setupView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(nonatomic) __weak MBKBaseViewController *controller;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

