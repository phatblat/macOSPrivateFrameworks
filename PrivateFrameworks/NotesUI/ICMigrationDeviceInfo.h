//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface ICMigrationDeviceInfo : NSObject <NSCopying>
{
    BOOL _upgraded;
    BOOL _upgradedToIOS13;
    BOOL _upgradable;
    BOOL _upgradableToIOS13;
    BOOL _isOSXDevice;
    BOOL _isIOSDevice;
    NSString *_name;
}

+ (void)logDeviceList:(id)arg1;
@property(readonly, nonatomic) BOOL isIOSDevice; // @synthesize isIOSDevice=_isIOSDevice;
@property(readonly, nonatomic) BOOL isOSXDevice; // @synthesize isOSXDevice=_isOSXDevice;
@property(readonly, nonatomic) BOOL upgradableToIOS13; // @synthesize upgradableToIOS13=_upgradableToIOS13;
@property(readonly, nonatomic) BOOL upgradable; // @synthesize upgradable=_upgradable;
@property(readonly, nonatomic) BOOL upgradedToIOS13; // @synthesize upgradedToIOS13=_upgradedToIOS13;
@property(readonly, nonatomic) BOOL upgraded; // @synthesize upgraded=_upgraded;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)attributedStringWithAttributes:(id)arg1 asteriskColor:(struct NSColor *)arg2;
- (id)loggableDescription;
- (BOOL)shouldBeHidden;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 upgradable:(BOOL)arg2 upgraded:(BOOL)arg3;
- (id)init;

@end
