//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFont;

@interface KHFont : NSObject
{
    NSFont *_internalFont;
}

+ (id)safelyLoadFontWithName:(id)arg1 size:(double)arg2;
+ (id)systemFontOfSize:(double)arg1;
+ (id)fontWithName:(id)arg1 size:(double)arg2;
@property(retain) NSFont *internalFont; // @synthesize internalFont=_internalFont;
- (void).cxx_destruct;
- (id)systemFont;

@end
