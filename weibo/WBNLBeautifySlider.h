//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UILabel;
@protocol WBNLBeautifySliderDelegate;

@interface WBNLBeautifySlider : UIView
{
    float _value;
    float _minimumValue;
    float _maximumValue;
    id <WBNLBeautifySliderDelegate> _delegate;
    unsigned long long _beautifyType;
    UILabel *_nameLabel;
    UIImageView *_iconView;
    UIImageView *_dotView;
    UIView *_panView;
    UIView *_lineView;
    UIView *_progressView;
    UIImage *_dotImageNormal;
    UIImage *_dotImageZero;
}

@property(retain, nonatomic) UIImage *dotImageZero; // @synthesize dotImageZero=_dotImageZero;
@property(retain, nonatomic) UIImage *dotImageNormal; // @synthesize dotImageNormal=_dotImageNormal;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *panView; // @synthesize panView=_panView;
@property(retain, nonatomic) UIImageView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) float value; // @synthesize value=_value;
@property(nonatomic) unsigned long long beautifyType; // @synthesize beautifyType=_beautifyType;
@property(nonatomic) __weak id <WBNLBeautifySliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dotDidDrag:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (double)getProgressValue;
- (double)getProgressLength;
- (void)updateViews;
- (void)onValueChanged;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)setupDotView;
- (void)setupProgressView;
- (void)setupLineView;
- (void)setupNameLabel;
- (void)setupIconView;
- (void)setupViews;
- (id)init;

@end

