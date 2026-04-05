module.exports = {
  params: {
    plugType: 'M',
    P1: undefined,
    P2: undefined,
    P3: undefined,
    P4: undefined
  },
  body: p => {
    const standard = `
        (module MagneticConnector (layer F.Cu)
        ${p.at /* parametric position */}

        ${'' /* footprint reference */}
        (fp_text reference "${p.ref}" (at 0 0) (layer F.SilkS) ${p.ref_hide} (effects (font (size 1 1) (thickness 0.15))))
        (fp_text value MCP23017 (at 0 0) (layer F.Silks) hide (effects (font (size 1 1) (thickness 0.15))))

        ${''/* component outline */}
        (fp_line (start 2.2 16.59) (end 6.2 16.59) (layer F.SilkS) (width 0.12))
        (fp_line (start 6.2 16.59) (end 6.2 -16.59) (layer F.SilkS) (width 0.12))
        (fp_line (start 6.2 -16.59) (end 2.2 -16.59) (layer F.SilkS) (width 0.12))
        (fp_line (start 2.2 -16.59) (end 2.2 16.59) (layer F.SilkS) (width 0.12))
        `
    const pads = `
        
        (pad 1 thru_hole circle (at 0 2.7) (size 1.5 1.5) (drill 1.0) (layers *.Cu *.Mask) ${p.P4.str})
        (pad 2 thru_hole circle (at 0 0.9) (size 1.5 1.5) (drill 1.0) (layers *.Cu *.Mask) ${p.P5.str})
        (pad 3 thru_hole circle (at 0 -0.9) (size 1.5 1.5) (drill 1.0) (layers *.Cu *.Mask) ${p.P6.str})
        (pad 4 thru_hole circle (at 0 -2.7) (size 1.5 1.5) (drill 1.0) (layers *.Cu *.Mask) ${p.P7.str})
    `;

    const end = `
      )
    `;

    if (p.plugType === 'F') {
      return standard + pads + end;
    } else {
      const standard_F = `
        (module MagneticConnector (layer F.Cu)
        ${p.at /* parametric position */}

        ${'' /* footprint reference */}
        (fp_text reference "${p.ref}" (at 0 0) (layer F.SilkS) ${p.ref_hide} (effects (font (size 1 1) (thickness 0.15))))
        (fp_text value MCP23017 (at 0 0) (layer F.Silks) hide (effects (font (size 1 1) (thickness 0.15))))

        ${''/* component outline */}
        (fp_line (start -4.6 10.65) (end 0 10.65) (layer F.SilkS) (width 0.12))
        (fp_line (start 0 10.65) (end 0 -10.65) (layer F.SilkS) (width 0.12))
        (fp_line (start 0 -10.65) (end -4.6 -10.65) (layer F.SilkS) (width 0.12))
        (fp_line (start -4.6 -10.65) (end -4.6 10.65) (layer F.SilkS) (width 0.12))
        `;

      return standard_F + pads + end;
    }
  }
}
