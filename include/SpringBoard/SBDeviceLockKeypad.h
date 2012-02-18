/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"
#import "SpringBoard-Structs.h"

@class UIButton;

@interface SBDeviceLockKeypad : SBUnknownSuperclass {
	UIButton *_deleteButton;	// 124 = 0x7c
	UIButton *_cancelButton;	// 128 = 0x80
	BOOL _deleteEnabled;	// 132 = 0x84
	BOOL _playKeyboardClicks;	// 133 = 0x85
}
@property(assign, nonatomic, getter=isDeleteEnabled) BOOL deleteEnabled;	// G=0x93255; S=0x93265; @synthesize=_deleteEnabled
@property(readonly, assign, nonatomic) BOOL emergencyKeyChar;	// G=0x93249; 
@property(readonly, assign, nonatomic) BOOL cancelKeyChar;	// G=0x93245; 
@property(readonly, assign, nonatomic) BOOL deleteKeyChar;	// G=0x93241; 
@property(assign, nonatomic) BOOL showsEmergencyCallButton;	// G=0x93239; S=0x9323d; 
@property(assign, nonatomic) BOOL playsKeyboardClicks;	// G=0x93229; S=0x93379; 
+ (id)keypadImage;	// 0x9324d
+ (id)pressedImage;	// 0x93251
+ (CGSize)defaultSize;	// 0x93349
- (id)initWithFrame:(CGRect)frame;	// 0x932e1
- (void)dealloc;	// 0x93535
- (void)hiddenFromView;	// 0x93225
- (void)willBecomeVisible;	// 0x93525
- (id)_keypadImage;	// 0x934fd
- (id)_pressedImage;	// 0x934d5
- (id)initWithDefaultSize;	// 0x933c5
// declared property getter: - (BOOL)playsKeyboardClicks;	// 0x93229
// declared property setter: - (void)setPlaysKeyboardClicks:(BOOL)clicks;	// 0x93379
// declared property getter: - (BOOL)showsEmergencyCallButton;	// 0x93239
// declared property setter: - (void)setShowsEmergencyCallButton:(BOOL)button;	// 0x9323d
// declared property getter: - (BOOL)deleteKeyChar;	// 0x93241
// declared property getter: - (BOOL)cancelKeyChar;	// 0x93245
// declared property getter: - (BOOL)emergencyKeyChar;	// 0x93249
// declared property getter: - (BOOL)isDeleteEnabled;	// 0x93255
// declared property setter: - (void)setDeleteEnabled:(BOOL)enabled;	// 0x93265
@end