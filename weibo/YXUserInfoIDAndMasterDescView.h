//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface YXUserInfoIDAndMasterDescView : UIView
{
    unsigned long long _fromeType;
    UILabel *_masterDesclabel;
    UIImageView *_masterDescImageView;
    UILabel *_IDlabel;
    UIImageView *_prettyIDBackImageView;
    UILabel *_prettyIDlabel;
}

@property(retain, nonatomic) UILabel *prettyIDlabel; // @synthesize prettyIDlabel=_prettyIDlabel;
@property(retain, nonatomic) UIImageView *prettyIDBackImageView; // @synthesize prettyIDBackImageView=_prettyIDBackImageView;
@property(retain, nonatomic) UILabel *IDlabel; // @synthesize IDlabel=_IDlabel;
@property(retain, nonatomic) UIImageView *masterDescImageView; // @synthesize masterDescImageView=_masterDescImageView;
@property(retain, nonatomic) UILabel *masterDesclabel; // @synthesize masterDesclabel=_masterDesclabel;
@property(nonatomic) unsigned long long fromeType; // @synthesize fromeType=_fromeType;
- (void).cxx_destruct;
- (void)upDateOnlyID:(id)arg1;
- (void)upDateOnlyIDWithisApprove:(id)arg1;
- (void)upDateIDAndMasterDescViewWithisApprove:(id)arg1;
- (void)layoutAllViews;
- (void)setupView;
- (id)initWithFromeType:(unsigned long long)arg1;

@end

