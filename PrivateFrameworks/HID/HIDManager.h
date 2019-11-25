//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface HIDManager : NSObject
{
    struct __IOHIDManager *_manager;
    CDUnknownBlockType _elementHandler;
    CDUnknownBlockType _deviceNotificationHandler;
    CDUnknownBlockType _inputReportHandler;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)activate;
- (void)close;
- (void)open;
- (void)setDispatchQueue:(id)arg1;
- (void)setCancelHandler:(CDUnknownBlockType)arg1;
- (void)setInputReportHandler:(CDUnknownBlockType)arg1;
- (void)setDeviceNotificationHandler:(CDUnknownBlockType)arg1;
- (void)setDeviceMatching:(id)arg1;
- (void)setInputElementHandler:(CDUnknownBlockType)arg1;
- (void)setInputElementMatching:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
@property(readonly) NSArray *devices;
- (id)description;
- (void)dealloc;
- (id)initWithOptions:(long long)arg1;
- (id)init;

@end

