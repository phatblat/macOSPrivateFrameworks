//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (CRKProfileAdditions)
+ (id)crk_iOSPlaceholderProfileURL;
+ (id)crk_macOSProfileURL;
+ (id)crk_overriddenDescriptionForItems:(id)arg1 originalDescription:(id)arg2;
+ (id)crk_uniqueTemporaryFileURL;
+ (id)crk_uniqueTemporaryDirectoryURL;
- (id)crk_stringByRemovingWWWPrefixFromString:(id)arg1;
- (id)crk_sharingDescription;
- (BOOL)crk_isBundle;
- (id)crk_escapedPath;
@end

