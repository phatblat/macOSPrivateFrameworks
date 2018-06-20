//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class INImage, INIntent, NSUserActivity;

@interface INShortcut : NSObject <NSSecureCoding, NSCopying>
{
    INIntent *_intent;
    NSUserActivity *_userActivity;
    INImage *_activityImage;
}

+ (BOOL)supportsSecureCoding;
@property(copy) INImage *activityImage; // @synthesize activityImage=_activityImage;
@property(readonly) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(copy) INIntent *intent; // @synthesize intent=_intent;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithUserActivity:(id)arg1;
- (id)initWithIntent:(id)arg1;

@end

