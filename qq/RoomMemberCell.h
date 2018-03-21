//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQCollectionViewCell.h>

@class NSString, QQAvatarView, UIImage, UILabel;

@interface RoomMemberCell : QQCollectionViewCell
{
    UILabel *_titleLabel;
    unsigned long long _phoneCode;
    unsigned long long _uin;
    unsigned long long _bindID;
    QQAvatarView *_avatarView;
    UIImage *_defaultHeadImage;
    NSString *_url;
    int _xo;
}

@property(nonatomic) unsigned long long phoneCode; // @synthesize phoneCode=_phoneCode;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) QQAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) unsigned long long bindID; // @synthesize bindID=_bindID;
@property(retain, nonatomic) UIImage *defaultHeadImage; // @synthesize defaultHeadImage=_defaultHeadImage;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
