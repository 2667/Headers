//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBNoteProArticleCoverModel : WBModelObject
{
    NSString *_url;
    NSString *_picId;
    NSString *_coverSource;
    NSString *_coverTips;
}

@property(copy, nonatomic) NSString *coverTips; // @synthesize coverTips=_coverTips;
@property(copy, nonatomic) NSString *coverSource; // @synthesize coverSource=_coverSource;
@property(copy, nonatomic) NSString *picId; // @synthesize picId=_picId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

