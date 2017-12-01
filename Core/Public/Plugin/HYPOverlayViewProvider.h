//  Copyright (c) 2017 WillowTree, Inc.

//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:

//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.

//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import <Foundation/Foundation.h>

/**
 * The HYPSnapshotPluginViewProvider protocol defines a mechanism for requesting
 * the view that is placed ontop of the app when a snap shot plugin becomes active.
 */
@protocol HYPSnapshotPluginViewProvider

/**
 * This gets called when the plugin view should activate in the provided context.
 * Simply add your plugin interation view as a subview to the provided context.
 *
 * Note: Contexts are changed each plugin activation.
 * @param context The provided view the plugin interaction view should be added to.
 */
-(void)activateSnapshotPluginViewWithContext:(nonnull UIView *)context;

/**
 * This is called when the plugin deactivates. This provided opportunity to clean up as needed.
 */
-(void)deactivateSnapshotPluginView;

@end

/**
 * The HYPOverlayPluginViewProvider protocol defines a mechanism for requesting
 * the view that is overlayed on top of the app when an Overlay plugin becomes active.
 */
@protocol HYPOverlayPluginViewProvider

/**
 * This gets called when the plugin view should activate in the provided context.
 * Simply add your plugin interation view as a subview to the provided context.
 *
 * Note: Contexts are changed each plugin activation.
 * @param context The provided view the plugin interaction view should be added to.
 */
-(void)activateOverlayPluginViewWithContext:(nonnull UIView *)context;

/**
 * This is called when the plugin deactivates. This provided opportunity to clean up as needed.
 */
-(void)deactivateOverlayPluginView;

@end

