//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQPublicAccountMessageCell.h>

@class CAAnimationGroup, CALayer, UIImageView;

@interface QQPublicAccountAdMsgCell : QQPublicAccountMessageCell
{
    UIImageView *_animIcon;
    CALayer *_animLayer;
    CAAnimationGroup *_animGroup;
}

@property(retain, nonatomic) CAAnimationGroup *animGroup; // @synthesize animGroup=_animGroup;
@property(retain, nonatomic) CALayer *animLayer; // @synthesize animLayer=_animLayer;
@property(retain, nonatomic) UIImageView *animIcon; // @synthesize animIcon=_animIcon;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setC2CData:(id)arg1;

@end

