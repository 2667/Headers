//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "TTHeaderViewProtocol-Protocol.h"

@class NSString, SSThemedImageView, SSThemedLabel, UITapGestureRecognizer;

@interface TTAddFriendHeaderView : SSThemedView <TTHeaderViewProtocol>
{
    double _minimumHeaderHeight;
    SSThemedImageView *_iconImageView;
    SSThemedLabel *_titleLabel;
    SSThemedLabel *_descLabel;
    SSThemedImageView *_arrowImageView;
    SSThemedView *_bottomView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) SSThemedView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) SSThemedImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) SSThemedLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SSThemedImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) double minimumHeaderHeight; // @synthesize minimumHeaderHeight=_minimumHeaderHeight;
- (void).cxx_destruct;
- (void)constraintsViews;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

