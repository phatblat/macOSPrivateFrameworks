//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSString, NSTextField;

@interface PKSimpleAlertViewController : NSViewController
{
    NSString *_messageText;
    NSTextField *_messageTextField;
}

@property(retain, nonatomic) NSTextField *messageTextField; // @synthesize messageTextField=_messageTextField;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
- (void).cxx_destruct;
- (void)okButtonClicked:(id)arg1;
- (void)awakeFromNib;
- (id)nibName;
- (id)nibBundle;

@end

