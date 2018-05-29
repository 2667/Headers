//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSString, WBUser;

@interface WBPageUserWithAttributeTextCard : WBPageCard
{
    WBUser *_user;
    NSString *_questionStatusDes;
    NSString *_contentText;
}

+ (_Bool)isValidForDictionary:(id)arg1;
+ (Class)fangleTableCellClass;
+ (Class)tableViewCellClass;
+ (Class)viewClass;
@property(retain, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(retain, nonatomic) NSString *questionStatusDes; // @synthesize questionStatusDes=_questionStatusDes;
@property(readonly, nonatomic) WBUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)setUser:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;

@end

