//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSString;

__attribute__((visibility("hidden")))
@interface Theme : NSObject
{
    NSString *m_themeID;
}

+ (id)themeIDFromTrailerID:(id)arg1;
+ (id)trailerIDFromThemeID:(id)arg1;
+ (BOOL)themeIDIsTrailer:(id)arg1;
+ (id)themeWithID:(id)arg1;
+ (id)themeIDs;
@property(readonly, nonatomic) NSString *themeID; // @synthesize themeID=m_themeID;
- (void).cxx_destruct;
- (id)posterImage;
- (id)displayNameForTransitionName:(id)arg1;
- (id)micaFileNameForCutawayName:(id)arg1 cutawayDirection:(int)arg2;
- (id)micaFileNameForTransitionName:(id)arg1 transitionDirection:(int)arg2;
- (id)micaFileNameForTitleNamed:(id)arg1;
- (id)micaFileBaseName;
- (id)musicName;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSImage *previewImage;
- (id)initWithThemeID:(id)arg1;
@property(readonly, nonatomic) NSString *trailerID;

@end
