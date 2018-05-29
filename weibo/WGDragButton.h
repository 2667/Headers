//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIImageView;

@interface WGDragButton : UIButton
{
    _Bool _isTap;
    _Bool _first;
    _Bool _change;
    _Bool _needHidePart;
    int _orientation;
    NSString *_btnImageStrN;
    NSString *_btnImageStrP;
    UIImageView *_dotImageView;
}

@property(retain, nonatomic) UIImageView *dotImageView; // @synthesize dotImageView=_dotImageView;
@property(nonatomic) _Bool needHidePart; // @synthesize needHidePart=_needHidePart;
@property(copy, nonatomic) NSString *btnImageStrP; // @synthesize btnImageStrP=_btnImageStrP;
@property(copy, nonatomic) NSString *btnImageStrN; // @synthesize btnImageStrN=_btnImageStrN;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool change; // @synthesize change=_change;
@property(nonatomic) _Bool first; // @synthesize first=_first;
@property(nonatomic) _Bool isTap; // @synthesize isTap=_isTap;
- (void).cxx_destruct;
- (void)hidePartRight;
- (void)hidePartLeft;
- (void)dismissBtnAnimate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(nonatomic, getter=isAdsorbEnable) _Bool adsorbEnable;
@property(nonatomic, getter=isDragEnable) _Bool dragEnable;
- (_Bool)blockGesture:(id)arg1;

@end

