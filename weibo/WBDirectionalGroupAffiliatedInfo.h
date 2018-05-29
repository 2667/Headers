//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBDirectionalGroupAffiliatedInfo : WBModelObject
{
    int _pageType;
    NSString *_uuid;
    NSString *_ID;
    NSString *_name;
    NSString *_avatarUrl;
    NSString *_topicHostUid;
    unsigned long long _verifiedType;
}

+ (_Bool)isValidForDictionary:(id)arg1;
@property(nonatomic) unsigned long long verifiedType; // @synthesize verifiedType=_verifiedType;
@property(nonatomic) int pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) NSString *topicHostUid; // @synthesize topicHostUid=_topicHostUid;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (unsigned long long)verifiedTypeWithDictionary:(id)arg1;
- (id)dictionaryWithValues;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithContact:(id)arg1;
- (id)initWithUrl:(id)arg1;
- (id)init;
- (_Bool)theHostIsTopic;
- (_Bool)theHostIsPerson;

@end

