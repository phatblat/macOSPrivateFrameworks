//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface RMUserNotificationContext : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSArray *_localizedUserNotificationBodyArguments;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *localizedUserNotificationBodyArguments; // @synthesize localizedUserNotificationBodyArguments=_localizedUserNotificationBodyArguments;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)userInfo;
- (id)categoryIdentifier;
- (id)localizedUserNotificationBodyKey;
- (id)localizedUserNotificationSubTitleKey;
- (id)localizedUserNotificationTitleKey;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

