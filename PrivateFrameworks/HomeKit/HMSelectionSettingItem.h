//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, NSUUID;

@interface HMSelectionSettingItem : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;
    NSString *_title;
    NSString *_localizedTitle;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
