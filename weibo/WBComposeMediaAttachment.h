//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WBMediaEditorCache;

@interface WBComposeMediaAttachment : NSObject
{
    _Bool _shouldHideEditLabel;
    unsigned long long _type;
    id _cover;
    WBMediaEditorCache *_cache;
}

+ (id)attachmentWithMediaCache:(id)arg1;
@property(nonatomic) _Bool shouldHideEditLabel; // @synthesize shouldHideEditLabel=_shouldHideEditLabel;
@property(retain, nonatomic) WBMediaEditorCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) id cover; // @synthesize cover=_cover;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithMediaCache:(id)arg1;

@end

