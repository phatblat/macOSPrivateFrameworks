//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INVCVoiceShortcut.h"
#import "NSSecureCoding.h"

@class INImage, INShortcut, NSDate, NSString, WFWorkflow;

@interface VCVoiceShortcut : NSObject <INVCVoiceShortcut, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_phrase;
    NSString *_shortcutName;
    NSString *_shortcutDescription;
    NSString *_associatedAppBundleIdentifier;
    INImage *_keyImage;
    INShortcut *_shortcut;
    NSDate *_dateCreated;
    NSDate *_dateLastModified;
    unsigned long long _cachedBlacklistStatus;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
@property(nonatomic) unsigned long long cachedBlacklistStatus; // @synthesize cachedBlacklistStatus=_cachedBlacklistStatus;
@property(readonly, nonatomic) NSDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, nonatomic) INShortcut *shortcut; // @synthesize shortcut=_shortcut;
@property(readonly, copy, nonatomic) INImage *keyImage; // @synthesize keyImage=_keyImage;
@property(readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier; // @synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *shortcutDescription; // @synthesize shortcutDescription=_shortcutDescription;
@property(readonly, copy, nonatomic) NSString *shortcutName; // @synthesize shortcutName=_shortcutName;
@property(readonly, copy, nonatomic) NSString *phrase; // @synthesize phrase=_phrase;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) WFWorkflow *workflow;
@property(readonly, nonatomic) BOOL hasBeenModified;
- (id)initWithIdentifier:(id)arg1 phrase:(id)arg2 shortcutName:(id)arg3 shortcutDescription:(id)arg4 associatedAppBundleIdentifier:(id)arg5 dateCreated:(id)arg6 dateLastModified:(id)arg7 shortcut:(id)arg8 keyImageData:(id)arg9 error:(id *)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
