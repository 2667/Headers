//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSArray, NSString;

@interface WBExtraContacts : WBModelObject
{
    NSArray *_contacts;
    NSString *_sectionTitle;
    NSString *_sectionIndexTitle;
}

+ (_Bool)isValidForDictionary:(id)arg1;
@property(retain, nonatomic) NSString *sectionIndexTitle; // @synthesize sectionIndexTitle=_sectionIndexTitle;
@property(retain, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

