//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface TTFResurrectionView : UIView
{
    UIImageView *_resurrectionIconImageView;
    UILabel *_resurrectionTextLabel;
    UILabel *_resurrectionCountLabel;
    UIButton *_resurrectionBtn;
}

@property(retain, nonatomic) UIButton *resurrectionBtn; // @synthesize resurrectionBtn=_resurrectionBtn;
@property(retain, nonatomic) UILabel *resurrectionCountLabel; // @synthesize resurrectionCountLabel=_resurrectionCountLabel;
@property(retain, nonatomic) UILabel *resurrectionTextLabel; // @synthesize resurrectionTextLabel=_resurrectionTextLabel;
@property(retain, nonatomic) UIImageView *resurrectionIconImageView; // @synthesize resurrectionIconImageView=_resurrectionIconImageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

