//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (SocialAppsCoreAdditions)
+ (id)timestampWithInterval:(double)arg1;
- (id)escapedString;
- (id)idsDestination;
- (BOOL)containsCaseInsensitiveString:(id)arg1;
- (BOOL)containsString:(id)arg1 options:(unsigned long long)arg2;
- (id)formatForDisplayIfPhoneNumber;
- (BOOL)isEqualToPhoneNumber:(id)arg1;
- (id)formattedPhoneNumber;
- (BOOL)isPassType;
- (BOOL)isAudioType;
- (BOOL)isMovieType;
- (BOOL)isGIFType;
- (BOOL)isImageType;
@end

