//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface SFClientGetDeviceAssetsParams : NSObject <NSSecureCoding>
{
    unsigned short _bluetoothProductID;
    unsigned int _colorCode;
    NSString *_model;
    double _timeoutSeconds;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(nonatomic) unsigned int colorCode; // @synthesize colorCode=_colorCode;
@property(nonatomic) unsigned short bluetoothProductID; // @synthesize bluetoothProductID=_bluetoothProductID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

