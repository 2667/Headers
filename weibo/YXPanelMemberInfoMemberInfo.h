//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXModel.h"

@class NSMutableAttributedString, NSString;

@interface YXPanelMemberInfoMemberInfo : YXModel
{
    _Bool _hasChinese;
    int _isAnnoy;
    NSString *_infoCount;
    NSString *_infoName;
    NSMutableAttributedString *_attributeString;
}

@property(nonatomic) int isAnnoy; // @synthesize isAnnoy=_isAnnoy;
@property(retain, nonatomic) NSMutableAttributedString *attributeString; // @synthesize attributeString=_attributeString;
@property(nonatomic) _Bool hasChinese; // @synthesize hasChinese=_hasChinese;
@property(retain, nonatomic) NSString *infoName; // @synthesize infoName=_infoName;
@property(retain, nonatomic) NSString *infoCount; // @synthesize infoCount=_infoCount;
- (void).cxx_destruct;

@end

