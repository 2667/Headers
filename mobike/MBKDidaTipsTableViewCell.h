//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MBKViewProtocol-Protocol.h"

@class MBKBaseViewController, MBKDidaTipsModel, NSString, UIButton, UILabel, UIView;

@interface MBKDidaTipsTableViewCell : UITableViewCell <MBKViewProtocol>
{
    MBKDidaTipsModel *_model;
    id _delegate;
    UILabel *_tipsLabel;
    UIButton *_tipMoneyButton;
    UIView *_topLineView;
}

+ (double)viewWidth:(id)arg1;
+ (double)viewHeight:(id)arg1;
+ (id)reuseIdentifier;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UIButton *tipMoneyButton; // @synthesize tipMoneyButton=_tipMoneyButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MBKDidaTipsModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)tipButtonClicked;
- (void)setupView;
- (void)configSubView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(nonatomic) __weak MBKBaseViewController *controller;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

