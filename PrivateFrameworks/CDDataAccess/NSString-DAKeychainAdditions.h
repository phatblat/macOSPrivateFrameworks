//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (DAKeychainAdditions)
+ (id)da_new64ByteGUID;
+ (id)da_newGUID;
- (id)stringByURLQuoting;
- (id)da_trimWhiteSpace;
- (BOOL)da_hasPrefixCaseInsensitive:(id)arg1;
- (id)da_stringByURLEscapingPathComponent;
- (id)da_appendSlashIfNeeded;
- (id)da_removeSlashIfNeeded;
- (id)da_stringByRemovingPercentEscapesForUsername;
- (id)da_stringByAddingPercentEscapesForUsername;
- (id)da_absoluteURLForChildLeastInfoRepresentationRelativeToParentURL:(id)arg1;
@end
