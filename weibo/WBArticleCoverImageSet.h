//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class WBArticleCoverImage;

@interface WBArticleCoverImageSet : WBModelObject
{
    WBArticleCoverImage *_image;
    WBArticleCoverImage *_fullImage;
}

@property(retain, nonatomic) WBArticleCoverImage *fullImage; // @synthesize fullImage=_fullImage;
@property(retain, nonatomic) WBArticleCoverImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)toJSONDictionary;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;

@end

