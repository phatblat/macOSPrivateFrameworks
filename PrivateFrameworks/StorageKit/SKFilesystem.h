//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SKFilesystem : NSObject
{
    BOOL _isEncrypted;
    BOOL _defaultEffaceable;
    BOOL _isCaseSensitive;
    BOOL _isJournaled;
    BOOL _shouldShow;
    int _sortPriority;
    NSString *_localizedName;
    NSString *_type;
    NSString *_dmPersonality;
    unsigned long long _minimumSize;
    NSString *_localizedKey;
}

+ (BOOL)_shouldShowFilesystem:(id)arg1;
+ (id)_skfilesystemTypeWithPersonality:(id)arg1;
+ (id)filesystemsWithDMFilesystem:(id)arg1;
@property int sortPriority; // @synthesize sortPriority=_sortPriority;
@property(retain) NSString *localizedKey; // @synthesize localizedKey=_localizedKey;
@property unsigned long long minimumSize; // @synthesize minimumSize=_minimumSize;
@property BOOL shouldShow; // @synthesize shouldShow=_shouldShow;
@property BOOL isJournaled; // @synthesize isJournaled=_isJournaled;
@property BOOL isCaseSensitive; // @synthesize isCaseSensitive=_isCaseSensitive;
@property BOOL defaultEffaceable; // @synthesize defaultEffaceable=_defaultEffaceable;
@property BOOL isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(retain) NSString *dmPersonality; // @synthesize dmPersonality=_dmPersonality;
@property(retain) NSString *type; // @synthesize type=_type;
@property(retain) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)dicationaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSKFilesystem:(id)arg1 localizedName:(id)arg2 localizedKey:(id)arg3 caseSensitive:(BOOL)arg4 encrypted:(BOOL)arg5 shouldShow:(BOOL)arg6 dmPersonality:(id)arg7 minimumSize:(unsigned long long)arg8 sortPriority:(int)arg9;

@end

