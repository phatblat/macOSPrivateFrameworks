//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosImagingFoundation/IPAAdjustment.h>

@class NSDictionary, NSString;

@interface IPAPhotoAdjustment : IPAAdjustment
{
    BOOL _enabled;
    NSString *_maskUUID;
    NSDictionary *_autoSettings;
}

@property(retain, nonatomic) NSDictionary *autoSettings; // @synthesize autoSettings=_autoSettings;
@property(retain, nonatomic) NSString *maskUUID; // @synthesize maskUUID=_maskUUID;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)_debugDescriptionSuffix;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

